#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <chrono>  // Allows chrono functions
#include <thread>  // Allows thread manipulation
#include <cmath>   // Allows math formulas
#include <string>
#include <fstream> // Allow txt file manipulation
#include <iomanip> // Allows adding widths and precision

using namespace std;

// Allows pausing program
using namespace std::this_thread;

/*
Description:
	To call this function, simply pass the function name in Python that you wish to call.
Example:
	callProcedure("printsomething");
Output:
	Python will print on the screen: Hello from python!
Return:
	None
*/
void CallProcedure(string pName)
{
	char* procname = new char[pName.length() + 1];
	std::strcpy(procname, pName.c_str());

	Py_Initialize();
	PyObject* my_module = PyImport_ImportModule("CS210_Starter_PY_Code");
	PyErr_Print();
	PyObject* my_function = PyObject_GetAttrString(my_module, procname);
	PyObject* my_result = PyObject_CallObject(my_function, NULL);
	Py_Finalize();

	delete[] procname;
}

/*
Description:
	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
Example:
	int x = callIntFunc("PrintMe","Test");
Output:
	Python will print on the screen:
		You sent me: Test
Return:
	100 is returned to the C++
*/
int callIntFunc(string proc, string param)
{
	char* procname = new char[proc.length() + 1];
	std::strcpy(procname, proc.c_str());

	char* paramval = new char[param.length() + 1];
	std::strcpy(paramval, param.c_str());


	PyObject* pName, * pModule, * pDict, * pFunc, * pValue = nullptr, * presult = nullptr;
	// Initialize the Python Interpreter
	Py_Initialize();
	// Build the name object
	pName = PyUnicode_FromString((char*)"CS210_Starter_PY_Code");
	// Load the module object
	pModule = PyImport_Import(pName);
	// pDict is a borrowed reference 
	pDict = PyModule_GetDict(pModule);
	// pFunc is also a borrowed reference 
	pFunc = PyDict_GetItemString(pDict, procname);
	if (PyCallable_Check(pFunc))
	{
		pValue = Py_BuildValue("(z)", paramval);
		PyErr_Print();
		presult = PyObject_CallObject(pFunc, pValue);
		PyErr_Print();
	}
	else
	{
		PyErr_Print();
	}
	//printf("Result is %d\n", _PyLong_AsInt(presult));
	Py_DECREF(pValue);
	// Clean up
	Py_DECREF(pModule);
	Py_DECREF(pName);
	// Finish the Python Interpreter
	Py_Finalize();

	// clean 
	delete[] procname;
	delete[] paramval;


	return _PyLong_AsInt(presult);
}

/*
Description:
	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
Example:
	int x = callIntFunc("doublevalue",5);
Return:
	25 is returned to the C++
*/
int callIntFunc(string proc, int param)
{
	char* procname = new char[proc.length() + 1];
	std::strcpy(procname, proc.c_str());

	PyObject* pName, * pModule, * pDict, * pFunc, * pValue = nullptr, * presult = nullptr;
	// Initialize the Python Interpreter
	Py_Initialize();
	// Build the name object
	pName = PyUnicode_FromString((char*)"CS210_Starter_PY_Code");
	// Load the module object
	pModule = PyImport_Import(pName);
	// pDict is a borrowed reference 
	pDict = PyModule_GetDict(pModule);
	// pFunc is also a borrowed reference 
	pFunc = PyDict_GetItemString(pDict, procname);
	if (PyCallable_Check(pFunc))
	{
		pValue = Py_BuildValue("(i)", param);
		PyErr_Print();
		presult = PyObject_CallObject(pFunc, pValue);
		PyErr_Print();
	}
	else
	{
		PyErr_Print();
	}
	//printf("Result is %d\n", _PyLong_AsInt(presult));
	Py_DECREF(pValue);
	// Clean up
	Py_DECREF(pModule);
	Py_DECREF(pName);
	// Finish the Python Interpreter
	Py_Finalize();

	// clean 
	delete[] procname;

	return _PyLong_AsInt(presult);
}

// Create groceryList() function
void groceryList() {
	// Initialized variables
	int input;
	string itemInput;
	string groceryTxt;

	/* Do-While loop that sets questions outline
	* And asks what they would like to see or do.
	*/
	do {
		cout << setfill('=') << setw(90) << "" << endl;
		cout << "What would you like to do?" << endl;
		cout << setfill('-') << setw(45) << "" << endl << endl;
		sleep_for(0.5s); // Pause program
		cout << "1. Produce a list of all items purchased in the day" << endl << endl;
		cout << "2. Produce a number representing how many times a specific item was purchased" << endl << endl;
		cout << "3. Produce a text-based histogram listing all items purchase in the day" << endl << endl;
		cout << "4. Quit" << endl;
		cout << setfill('=') << setw(90) << "" << endl;
		
		// If input is not integer or less than 1 or greater than 4 produce error until correct response 
		while ((!(cin >> input)) || (input < 1) || (input > 4)) {
			sleep_for(0.5s);
			cout << endl << "Error a number 1 - 4 must be entered: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		if (input == 1) {
			// Produce a list of all items purchased in the day
			CallProcedure("readItems");
			cout << endl;
		}
		else if (input == 2) {
			// Produce number representing how many times purchased
			CallProcedure("itemCount");
			cout << endl;
		}
		else if (input == 3) {
			// Produce text-based histogram
			cout <<endl << setfill('_') << setw(43) << "" << endl;
			CallProcedure("histoGram");
			// Reads frequency.dat created from Python
			ifstream MyReadFile("frequency.dat");
			while (getline(MyReadFile, groceryTxt)) {
				cout << groceryTxt << endl;
			}
			cout << setfill('_') << setw(43) << "" << endl;
			// Closes file
			MyReadFile.close();
			cout << endl;
		}
		// If input 4 exits program with a few pauses
		else if (input == 4) {
			cout << "Exiting Program";
			sleep_for(0.5s);
			cout << ".";
			sleep_for(0.5s);
			cout << ".";
			sleep_for(0.5s);
			cout << ".";
			sleep_for(0.5s);
			exit(0);
		}
		// Catches any other errors and starts over
		else {
			cout << "Invalid response" << endl;
			cout << "Starting over";
			sleep_for(0.5s);
			cout << ".";
			sleep_for(0.5s);
			cout << ".";
			sleep_for(0.5s);
			cout << ".";
			cin.clear();
		}
	// Loops while input does not equal 4
	} while (input != 4);
}


void main()
{
	// Changes output background and text color
	system("Color F1");
	// Calls groceryList function
	groceryList();
}