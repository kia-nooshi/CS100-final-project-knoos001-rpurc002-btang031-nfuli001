 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# "Movie Recommender"
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \[Robert Purcell](https://github.com/RLP862195299)\,
 > \[Kianoosh Nooshi](https://github.com/kianooshi)\,
 > \[Nolan Fuliar-Abanes](https://github.com/Nabanes06)\,
 >  \[Bowen Tang](https://github.com/btang031)\,
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory or Visitor
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold one check-in meeting with your lab TA in addition to the final demo.

## Project Description
 > * Why is it important or interesting to us?
 > We wanted to code a an algorithm that could effectively recommend movies when given a certain set of criteria and be able to rank them by certain metrics such as Audience Score, and popularity.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [Language - C++ and Python] - Two languages that our group is proficient enough to work with.
 >   * [VsCode] - An editor that allows our group to work together on a project in real time.
 >   * [Github] - Able to work on files seperately for the same project.
 >   * [Hammer/terminal] - What UCR provides us to work together and connect to github.
 >   
 > * What will be the input/output of your project? What are the features that the project provides? 
 >   This will be a movie recommender that can recommend movies based on different categories such as genres, subgenres, audience score, or by a certain director or actor. The program will also be able to provide movie recommendations based on a similar movie provided by the user. 
 > 
 > 
 > ## Phase II
## Class Diagrams!
![Final Project (4)](https://user-images.githubusercontent.com/91499816/141945987-88317946-75b0-492f-a9e9-40d1cbae4c3d.png)

![composite_pattern](https://user-images.githubusercontent.com/91499816/142076487-68bc2aee-dbb8-4e7e-b200-c3a87ced6f69.jpeg)



 > Our class diagram gives an example of how our classes will be broken down. We plan on using composite and strategy design patterns since we have seperate classes for all features and plan to allow for multiple search algorithms. The leaf classes like MovieYear, MovieGenre, and MovieRating inherit from the MovieRec file which will help us optimize the program we plan on implementing.
## Design Patterns!
 >Composite - This structural pattern composes objects in terms of a tree structure to represent part as well as a whole hierarchy. Since a movie has multiple aspects of which can be a searchable category, it’ll be difficult to group different movies together based on that. With this, we can "branch" out from an inputted movie title and compare it with recommended movies to the user based on a related genre, director, and other comparable aspects. Therefore, our Movie object will be the "base" class and it will have subclasses that are related to the movie so that it may be compared to others to generate a recommendation.

 >Strategy - With this design pattern, we can define multiple search algorithms such as genre, subgenre, etc. With this, the user can specify an aspect of a movie,  and the program will search its database for other movies that are grouped with that aspect. If there are many search categories, main code might get overloaded  with all the different implemented strategies. Main code must delegate strategies to a linked object to lessen the burden. This way we can add in more strategies and not have to tamper with the main code.


 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
