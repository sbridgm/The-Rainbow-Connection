// 'The Rainbow Connection' is a song from the 1979 film, The Muppet Movie

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function Prototypes
void singTheRainbowConnection();
string findRainbowInTheSky();

int main()
{
	// Sing the song
	singTheRainbowConnection();

	// Find the rainbow in the sky
	string rainbow = findRainbowInTheSky();
	cout << "Look in the sky, and you'll see: " << rainbow << endl;

	return 0;
}

// Function to sing The Rainbow Connection
void singTheRainbowConnection()
{
	cout << "Why are there so many songs about rainbows" << endl;
	cout << "And what's on the other side" << endl;
	cout << "Rainbows are visions, but only illusions" << endl;
	cout << "And rainbows have nothing to hide" << endl << endl;

	cout << "So we've been told, and some choose to believe it" << endl;
	cout << "I know they're wrong, wait and see" << endl;
	cout << "Some day we'll find it, the rainbow connection" << endl;
	cout << "The lovers, the dreamers, and me" << endl << endl;

	cout << "Who said that every wish would be heard and answered" << endl;
	cout << "When wished on the morning star" << endl;
	cout << "Somebody thought of that, and someone believed it" << endl;
	cout << "Look what it's done so far" << endl << endl;

	cout << "What's so amazing that keeps us stargazing" << endl;
	cout << "And what do we think we might see" << endl;
	cout << "Some day we'll find it, the rainbow connection" << endl;
	cout << "The lovers, the dreamers, and me" << endl << endl;
}

// Finding the rainbow in the sky
string findRainbowInTheSky()
{
	string rainbow = "A beautiful rainbow";

	transform(rainbow.begin(), rainbow.end(), rainbow.begin(), ::toupper);

	return rainbow;
}