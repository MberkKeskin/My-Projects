#include <iostream>
#include <windows.h>

using namespace std;

class baseClass {
private:
	
public:
	int frequancy;
	int duration;
	baseClass(int frakeaans, int zamann);
	baseClass(const baseClass&);
	void playNote(int,int);
	
};

void baseClass::playNote(int frans, int zmn) {
	frequancy = frans;
	duration = zmn;
	Beep(baseClass::frequancy, baseClass::duration);
}
baseClass::baseClass(int frakeaans, int zamann) {
	frequancy = frakeaans;
	duration = zamann;
		
}

baseClass::baseClass(const baseClass& notacik) {
	frequancy = notacik.frequancy;
	duration = notacik.duration;
	playNote(frequancy, duration);
}
	

int main() {
	setlocale(LC_ALL, "Turkish");
int i = 0;
cout << "Amaçsýz beste- Mustafa Berk Keskin" << endl;
for (i = 0; i < 2; i++) {
	
	baseClass FirstNote(494, 400);
	baseClass SecondNote(349, 400);
	baseClass ThirdNote(494, 400);
	baseClass FourthNote(262, 400);
	baseClass FifthNote(294, 400);
	baseClass SixthNote(262, 400);
	baseClass SeventhtNote(494, 400);
	baseClass EightNote(349, 400);
	
	
	baseClass copyFirstNote(FirstNote);
	baseClass copySecondNote(SecondNote);
	baseClass copyThirdNote(ThirdNote);
	baseClass copyFourthNote(FourthNote);
	baseClass copyFifthNote(FifthNote);
	baseClass copySixthNote(SixthNote);
	baseClass copySeventhtNote(SeventhtNote);
	baseClass copyEightNote(EightNote);
	
}

baseClass NinethNote(349, 500);
baseClass TenthNote(494, 500);
baseClass EleventhNote(440, 500);
baseClass TwelvthNote(494, 500);
baseClass ThirtteenthNote(349, 500);
baseClass FourthteenthNote(440, 500);
baseClass FifthennthNote(494, 500);
baseClass SixteenthNote(440, 500);


baseClass copyNinethNote(NinethNote);
baseClass copyTenthNote(TenthNote);
baseClass copyEleventhNote(EleventhNote);
baseClass copyTwelvthNote(TwelvthNote);
baseClass copyThirtteenthNote(ThirtteenthNote);
baseClass copyFourthteenthNote(FourthteenthNote);
baseClass copyFifthennthNote(FifthennthNote);
baseClass copySixteenthNote(SixteenthNote);

for (i = 0; i < 2; i++) {
	
	baseClass SeventeenthNote(652, 400);
	baseClass EighteenthNote(742, 400);
	baseClass NineteenthNote(876, 400);
	baseClass TweentythNote(742, 400);
	baseClass TweentyOnethNote(444, 400);
	baseClass TweentyTwothNote(666, 400);
	baseClass TweentyThreethNote(897, 400);
	baseClass TweentyFourthNote(876, 400);
	baseClass TweentyFivethNote(856, 400);
	baseClass TweentySixthNote(832, 400);
	baseClass TweentySeventhNote(800, 400);


	baseClass copySeventeenthNote(SeventeenthNote);
	baseClass copyEighteenthNote(EighteenthNote);
	baseClass copyNineteenthNote(NineteenthNote);
	baseClass copyTweentythNote(TweentythNote);
	baseClass copyTweentyOnethNote(TweentyOnethNote);
	baseClass copyTweentyTwothNote(TweentyTwothNote);
	baseClass copyTweentyThreethNote(TweentyThreethNote);
	baseClass copyTweentyFourthNote(TweentyFourthNote);
	baseClass copyTweentyFivethNote(TweentyFivethNote);
	baseClass copyTweentySixthNote(TweentySixthNote);
	baseClass copyTweentySeventhNote(TweentySeventhNote);
}

return 0;
}
