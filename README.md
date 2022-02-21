# Cplusplus-Program

**CS-210**

Summarize the project and what problem it was solving.
**This Project was my final project in my Computer Science Programming Languages Class.
In this project I was required to combine Python and C++. It was a grocery item project.
I had to create a user interface in C++ on what the user wanted to do with a text grocery list.
If the user selected to produce a list of all items purchased in the day it would go through Python
loop through the text file and produce a list of all items and how many were in the list. If the user
chose to look for a certain item they would select that option and type it in. The program then uses Python
to loop through the txt file find the exact string match and print how many times it was in the list. If the 
user wanted to produce a histogram listing they would select that option. The program will then go through Python
loop through the text file and for every duplicate would add an asterick next to the item and finally wrote that 
text file to a .dat file and allowed my C++ program to read it. Finally if the user wished to quit the program they 
could input the button to quit.**

What did you do particularly well?
**I was able to catch all errors very well. Also, the Python code I wrote was very proficient especially the string match
function to capture the exact word a user inputted. Also, looping through every function if a user inputted the wrong 
information worked out well.**

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
**There are a few places I could enhance my code. For security purposes I could've used private class identifiers.
Also, I could have used a switch statement instead of an if statement for optimization.**

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
**The most difficult part I had on my project was exact string match in Python. I had to research exactly how to do it and kept 
utilizing trial and error to get it to function correctly. There are many resources online that I utilize to help me solve my 
programming roadblocks. Sometimes on reddit or sometimes on GitHub.**

What skills from this project will be particularly transferable to other projects or course work?
**Skills from this project that will help me with other projects or coursework include thinking of all possible errors
and accounting for them. Also, writing down exactly what I want my program to accomplish. Finally, constantly compiling
my code to ensure it is working as intended.**

How did you make this program maintainable, readable, and adaptable?
**To make this program maintainable, readable, and adaptable I used many comments throughout. Also, I tried to keep
the code very simple and not write many lines of code to accomplish one thing.**

**CS-230**

Briefly summarize The Gaming Room client and their software requirements. Who was the client? What type of software did they want you to design?
**The gaming room application required multiple teams to guess what image was being drawn from random stock images. One instance of the game and 
each player is only allowed once, this required the use of singleton classes.**

What did you do particularly well in developing this documentation?
**There were many things I did particularly well. However, understanding the development requirements for each platform and conveying it was what I did the best on.**

What about the process of working through a design document did you find helpful when developing the code?
**Creating the domain model and UML diagram helped the most when developing the code. Understanding how my program was supposed to behave was very important.**

If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?
**If I had to choose one part to revise it would be the recommendations section. I feel like I could add more data in there and many more comparisons so my client
can understand the differences between the platforms.**

How did you interpret the user’s needs and implement them into your software design? Why is it so important to consider the user’s needs when designing?
**I understood how the user wanted their App to run. I then created my domain model based on what the user wanted, such as, separate teams, 
separate players, and no name the same. It is important to consider the user's need when designing because it is their program. Creating a 
program that accomplishes everything the client wants is how we finish a project.**

How did you approach designing software? What techniques or strategies would you use in the future to analyze and design a similar software application?
**I approached the desing aspect by looking through what the client wanted on their App. I then created my UML diagram so I could see the proper flow
of my program. I then began to develop it. In the future I would use the exact same approach to design a software application.**

**CS-250**

How do I interpret user needs and implement them into a program? How does creating “user stories” help with this?
**I ensure that I gather all relevant information from the clients or stakeholders on what they want in their program. 
I then turn this into User Stories by answering what "type of user", what they "want it to do" and what "goal they want to achieve.**

How do I approach developing programs? What agile processes do I hope to incorporate into my future development work?
**I approach developing programs by knowing exactly what the user wants in their program. However, one of the most important
agile principle for me to understand is that the project can change at anytime. I will prepare myself by understanding 
that I must be flexible and communicate constantly.**

What does it mean to be a good team member in software development?
**A good team member works together with all members of their team. They understand the importance of active communication
and that everyone's opinion matters. A good team member works as part of the team and does not try and do everything
how they want and by themselves.**

**CS-255**

Briefly summarize the DriverPass project. Who was the client? What type of system did they want you to design?
What did you do particularly well?
**The DriverPass project was a system I had to design to allow students to take online driving practice exams, and allow students to schedule
driving practice with their drivers. Many students fail their initial driving exams, this program will help alleviate that issue. My client is DriverPass. What I did particularly well was designing the different UML diagrams. I showed how the system would let their customers take exams or purchase driving packages.**

If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?
**If I could revise one part of my work it would be my business requirements documents. More specifically, the nonfunctional requirements section. When documenting what needs to be done in a project it is important to be as specific and detailed as possible. There are many parts of this section where I could've added more detail, such as, platform constraints and accuaracy and precision.**

How did you interpret the user’s needs and implement them into your system design? Why is it so important to consider the user’s needs when designing?
**Initially we had an interview with the client DriverPass to find what they wanted in their system. Using this interview I extracted everything they wanted and implemented it in my design. It is always important to consider the user's needs when designing. Typically the user knows what their customer needs. Our job as developers is to ask many questions to ensure we understand what is needed of us.**

How do you approach designing software? What techniques or strategies would you use in the future to analyze and design a system?
**There are many different approaches to take when designing software. For myself, I will gather as much information as I need and document it. After, I will develop multiple UML diagrams. This will help me visualize what my program should do, it also allows me to brief my clients or coworkers on what needs to be done. Finally, I will begin developing my program following my UML and documentation.**

**CS-305**

Briefly summarize your client, Artemis Financial, and their software requirements. Who was the client? What issue did they want you to address?
**Artemis Financial is a financial consulting company.  They develop individualized financial plans for savings, retirement, investments, and insurance.  They have employed us to implement and apply the most current and effective software security.  More specifically Artemis Financial wants to add a file verification step to their web application to ensure secure communication.  It is my job to create this verification step in the form of a checksum.**

What did you do particularly well in identifying their software security vulnerabilities? Why is it important to code securely? What value does software security add to a company’s overall wellbeing?
**I performed many actions in identifying their software security vulnerabilities. What I did particularly well in was performing a dependency check and reviewing my vulnerabilities.  After reviewing them I suppressed the false positives and update what dependencies I could. Coding securely is one of the most important practices.  When a company such as Artemis Financial is working with customers financial information or personal information you must protect it from potential hackers. The wellbeing of the company relies on this security.  Customers are trusting that the company is protecting their personal information.  If this information is taken due to malicious activity, that trust is broken. Without trust customers take their business somewhere else.  It can take a long time for a company to earn their client’s trust back.**

What about the process of working through the vulnerability assessment did you find challenging or helpful?
**The most challenging part with the vulnerabilities was understanding false positives.  I had to do some extra research to find what dependencies had updates to fix the issues.  I then updated all my dependencies that I could.  I then suppressed those that had no fixes or that did not affect my program.**

How did you approach the need to increase layers of security? What techniques or strategies would you use in the future to assess vulnerabilities and determine mitigation techniques?
**I increased the layers of security in my program by creating a SHA256 algorithm to run my data through.  I also generated a certificate using the keytool. Finally, I ran the dependency check and updated the known vulnerabilities.  In the future I would run the dependency check.  I would also check for dependency update and update them to mitigate many vulnerabilities.**

How did you ensure the code and software application were functional and secure? After refactoring code, how did you check to see whether you introduced new vulnerabilities?
**I ensured that the code was functional and secure by performing a checksum validation.  I then ensured my browser was detecting my certificate that I made using my keytool.  After refactoring I ran a vulnerability check to ensure I did not introduce new vulnerabilities.**

What resources, tools, or coding practices did you employ that you might find helpful in future assignments or tasks?
**When developing my program, I was struggling on generating my certificate with the keytool and having my program recognize it.  I went through many online sources to find what I was doing incorrectly.  Eventually I solved the issue. As for tools, the dependency check helped tremendously.  I will ensure I use this in future assignments to look for vulnerabilities.  The coding practice I used most often was compiling my code whenever I changed it.  This ensures that I can find errors as soon as they happen.**

Employers sometimes ask for examples of work that you have successfully completed to demonstrate your skills, knowledge, and experience. What from this particular assignment might you want to showcase to a future employer?
**There were many parts of this assignment I did well and a few I struggled with. I would show a future employer that I successfully generated a self-signed certificate. This shows that I created one and that my browser has accepted it under my name.**

**CS-320**

How can I ensure that my code, program, or software is functional and secure?
**You can ensure that your code is functional and secure by running the appropriate tests.  After writing small sections of code it is important to run tests on it.  There are
many automated tests that help with this.  In this class I used Junit testing.  It is important to ensure that the whole tested program is covered by the Junit test.  After each section is properly tested and working, integration testing is next.  This consists of combining the different sections of code and testing whether they work properly together.**

How do I interpret user needs and incorporate them into a program?
**Gathering user needs through user stories and interviews will help me understand what the user wants in their program.  After gathering all the information from the user, I 
will plan my code by using notes and diagrams.  When I start developing the program I will constantly refer back to these notes and diagrams on what the user wants.  I will also center my testing around what is expected of the program based on the user needs.**

How do I approach designing software?
**I approach designing software by using the Software Development Life Cycle (SDLC) process.  The first step is planning what I will be doing. Next, defining, designing, building, testing, and deployment.  However, I will test my program throughout its entire lifecycle.**

**CS-330**

How do I approach designing software?
**When designing my project for this class I chose multiple models and took a picture of them.  I constantly looked back on the image to ensure my 3D program was looking similar to my 2D image.  Also, when thinking about the lighting and my texture I had to plan what would work well together.  These tactics can be applied in my future work by planning any program I want to develop.  Planning is a crucial role in software developing.**

How do I approach developing programs?
**As for my developing strategies with this project, I ensured all of my code worked properly.  I was constantly testing and changin little variables.  I also put many comments throughout my code.  Throughout the milestones for my project, I constantly improved upon my previous weeks milestone.  I also saved many copies of my project because I kept changing it drastically to get the end product I wanted.  This program had more lines of code, header files, and CPP files then anything I have worked on in the past.  This project helped me understand how to organize it all logically, and how everything works together.**

How can computer science help me in reaching my goals?
**This class was not only my hardest class in my degree path it was also my most informative.  I had much practice with pointers which I struggle with.  Also, as mentioned, I used many header files and other CPP files and connected them all properly.  I also got much practice with debugging.  This class will help me with my future educational and professional pathway more than any other class has.**

**CS-340**

How do you write programs that are maintainable, readable, and adaptable? Especially consider your work on the CRUD Python module from Project One, which you used to connect the dashboard widgets to the database in Project Two. What were the advantages of working in this way? How else could you use this CRUD Python module in the future?
**To write programs that are maintainable, readable, and adaptable the program needs to be reusable.  This means making a program that uses logic that can be used for many different programs.  Also, proper commenting can help other prgrammers understand what your program is supposed to do.  Finally, creating simple functions that do one thing can be used for anything similar. **

How do you approach a problem as a computer scientist? Consider how you approached the database or dashboard requirements that Grazioso Salvare requested. How did your approach to this project differ from previous assignments in other courses? What techniques or strategies would you use in the future to create databases to meet other client requests?
**As a computer scientist you first have to plan on how to solve a problem.  You must know what the solution should look like and map out how to get there.  This can be done with pen and paper, or by creating pseudocode.  This project was different than anything I have worked on before.  I used multiple things to develop a full stack application, mongoDB, my CRUD Python module, and my actual project using Dash and Pandas.  It was very interesting and showed me how multiple things can interact with eachother.  To meet client requests in the future I will definately use the Data Aggregation Pipeline to organize databases.**

What do computer scientists do, and why does it matter? How would your work on this type of project help a company, like Grazioso Salvare, to do their work better?
**Computer Scientists solve a problem using technology.  Computer science is very broad, individuals in this field must understand, mathematics, programming languages, embeded systems and many more.  This matters because they work on developing programs for everything from videogames, street cameras, ATMs, phones, computers, airplanes, cars, and many more.  My work on this type of project can help any company.  A database such as the one I worked on had over 10,000 data points. Manually going through each one would take a very long time.  Whereas my program did not take long to develop and was able to organize and display the data in seconds.**
