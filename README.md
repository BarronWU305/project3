# CSCI 208, Fall 2023, Extreme Programming Shape Queue

We're going to build a linked-list based queue of polymorphic shapes as a whole class.  That is:  We'll all be working on *the same source code* to develop an application together as a team.  Our program will:

*  Implement a set of polymorphic shapes capable of storing their parameters, calculating area and circumference, and reporting about themselves;
*  Read in a file with information about different shapes;
*  Store those shapes in a *queue* of shapes;
*  Report all of the shapes in the queue.

We'll create the class-level design diagram in class on Monday as a class.  We'll also break the class up into teams of two or three people to work on the different implementations.  We'll use lab time on Monday to start working on our classes.  On Wednesday in class, we'll review the code that's been created and make some notes about how to fix things.  During lab on Wednesday, you'll work with your teams to fix your code.  By Friday, we'll have a working program.

## Important Observations:
*  Your grade for lab this week will be based on your participation in your teams;
*  Make sure you always do a `git pull` before you start working ... perhaps even `pull` frequently while you work -- always `pull` before `commit` and `push`;
*  This *will get messy*!! We're going to have some repo issues ... that's part of the learning process on this;
*  Have fun with it!  This is an opportunity for us to play together with code as a class!
*  This will be yet another example of a linked list for you all to help with your *project 3*.

## Teams:
We'll record the teams here.

*   **ShapeQueueMain** -- Lee, Auggie, Lorenzo
*   **ShapeReader** -- Kelly, Natalie, Presice
*   **ShapeQueue** -- Jaden, Xavier, Jyren
*   **Node** -- James, Matthew, Nick
*   **Hexagon** -- Zach, Noah, Maddie
*   **Ellipse** -- Kyla, Kade, Miguel, Tina, Taylor
*   **Circle** -- Kyla, Kade, Miguel, Tina, Taylor
*   **RightTriangle** -- Jason, Ethel, Kaylei, Tyler, Stephen
*   **Rectangle** -- Jason, Ethel, Kaylei, Tyler, Stephen
*   **Square** -- Hamid, Kevin, Markus
*   **Shape** -- Domenick, Kyle, Jacob
*   Makefile / organization -- Dr. Wiegand

## Naming Conventions and Style
*   Internal state fields of classes: `snake_case_` with underscore suffix
*   Method names: `camelCase`
*   Class names: `MixedCase`
*   In-coming parameter names: TBD
*   Variables/fields/types -- Expressed as nouns, functions/methods -- expressed verb-phrases
*   Body source files end with the `.cpp` suffix
*   Everyone will put themselves in the `std` namespace
*   Think carefully about your commenting style
