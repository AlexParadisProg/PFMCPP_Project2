#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
int
char
bool
float
double 
void
 
  
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int total = 10;
    int minuteSpent = 60;
    int length = 30;

    char grade = 'A';
    char lastLetter = 'Z';
    char chapter = 'B';

    bool isOpen = true;
    bool finished = false;
    bool running = false;

    float letterSize = 1.2f;
    float paragraphSpace = 4.8f;
    float textIndentation = 10.6f;

    double maxWidth = 2E-8;
    double maxLetterSpace = 8.5;
    double minLetterSpace = 2.0;
    
    ignoreUnused(number, total, minuteSpent, length, grade, lastLetter, chapter, isOpen, finished, running, letterSize, paragraphSpace, textIndentation, maxWidth, maxLetterSpace, minLetterSpace); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void verticalRotatePlane(int planeId = 1, float verticalAngle = 0.1f, float rotationSeconds = 0.1f)
{
    ignoreUnused(planeId, verticalAngle, rotationSeconds); 
}   

/*
 2)
 */
void horizontalRotatePlane(int boatId = 1, float horizontalAngle = 0.1f, float rotationSeconds = 0.1f)
{
    ignoreUnused(boatId, horizontalAngle, rotationSeconds); 
}

/*
 3)
 */
void lionHunting(int lionId = 1, int animalHuntedId = 0, int walkSpeed = 1)
{
    ignoreUnused(lionId, animalHuntedId, walkSpeed); 
}
/*
 4)
 */
bool detachRocketsfromShuttle(int rocketId = 1)
{
    ignoreUnused(rocketId);
    return {};
}

/*
 5)
 */
int changeTelevisionChannel(bool moveForward = 1, int numberOfChannels = 1)
{
    ignoreUnused(moveForward, numberOfChannels);
    return {};
}
/*
 6)
 */
bool displayExtSource(int extSource = 1)
{
    ignoreUnused(extSource);
    return {};
}
/*
 7)
 */
bool spinWasher(int washerId = 1, int spinSpeed = 1)
{
    ignoreUnused(washerId, spinSpeed);
    return {};
}
/*
 8)
 */
void setFridgeTemperature(int fridgeId = 1, float temperatureC = 0.0f)
{
    ignoreUnused(fridgeId, temperatureC);
}
/*
 9)
 */
bool recordVideo(int cameraId)
{
    ignoreUnused(cameraId);
    return {};
}
/*
 10)
 */
float playSpeaker(int speakerChannelNumber = 1)
{
    ignoreUnused(speakerChannelNumber);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    verticalRotatePlane(3, 0.8f, 5);

    //2)
    horizontalRotatePlane(2, 0.3f, 12);

    //3)
    lionHunting(2, 10, 15);

    //4)
    auto rocketDetached = detachRocketsfromShuttle(1);

    //5)
    auto televisionChannel = changeTelevisionChannel(0, 2);

    //6)
    auto newExtSource = displayExtSource(2);

    //7)
    auto isWasherSpinning = spinWasher(2, 10);

    //8)
    setFridgeTemperature(4, 5.2f);
    
    //9)
    auto isCameraRecording = recordVideo(4);

    //10)
    auto speakerVolume = playSpeaker(1);
    
    ignoreUnused(carRented, rocketDetached, televisionChannel, newExtSource, isWasherSpinning, isCameraRecording, speakerVolume);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
