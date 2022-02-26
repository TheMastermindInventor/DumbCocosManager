#include "Cocos.h"

int main( ) 
{
	std::string options,chck;
	std::cout << "enter 'A' to make a new Cocos2D-X project\nenter 'K' to download Android Studio\nenter 'J' to downlaod Java\nenter 'B' to donwload Cocos2D-X and python(only 2.x, 3.x is not allowed)\nenter 'V' to download Visual Studios 2019\nenter 'C' To Install CMake\nenter 'L' to learn Cocos2D-X\nenter 'H' for help\nenter 'E' to exit\n" << std::endl;
	std::cout << "(Enter H if you never used Cocos2D-X)Your Choice : ";
	std::cin >> options;
	
	if (*options.begin() == 'k' || *options.begin() == 'K') {
		system("cls");
		std::cout << "\nAfter Install, Download NDK and SDK via Android Studio(check on google as to how to do it),\nAnd save the paths of NDK and SDK in a notepad file,\nthis will be used when installing cocos" << std::endl;
		CocosFunction::DownloadAndroidStudio();
		
		main();
	}
    else if (*options.begin() == 'J' || *options.begin() == 'j') {
		CocosFunction::DownloadJava();
		std::cout << "Now Save the Java Directory to A Notepad File\nthis will be used when installing cocos" << std::endl;
		main();
	}
	else if (*options.begin() == 'H' || *options.begin() == 'h') {
		
		std::cout << "\n\nCocos2D-X is a very good 2D and 3D(some features missing) framework\nwhich is ported to C++, originally it was called Cocos-2D\nand was supposed to be written in Objective-C\nIf your PC doesn't have Java, press 'J' to donwload it and install it\nIf your PC doesn't have Android Studio with Android SDK and NDK,\nDownload Android Studio by pressing 'K' and install both its SDK and NDK via Android Studio,\nThen keep both the paths of NDK, SDK and Java in a notepad file for late use\nIf your PC doesn't have Cocos, press 'B' to install,\nthen press 'A' to make a new project\nthen to start learning press 'L'\n\n";
		main();
	}
	else if (*options.begin() == 'L' || *options.begin() == 'l') {
		system("cls");
		system("start https://docs.cocos2d-x.org/cocos2d-x/v4/en/basic_concepts/getting_started.html");
		main();
	}
	else if (*options.begin() == 'C' || *options.begin() == 'c') {
		CocosFunction::downloadandInstallCmake();
		main();
	}
	else if (*options.begin() == 'V' || *options.begin() == 'v') {
		CocosFunction::downloadVisualStudios();
		main();
	}
	else if (*options.begin() == 'A' || *options.begin() == 'a') {
		std::string gotCmake;
		std::cout << "Got Cmake ?(Y or N) : ";
		std::cin >> gotCmake;
		if (*gotCmake.begin() == 'Y' || *gotCmake.begin() == 'y')
		{
			CocosFunction::putCocos();
			CocosFunction::cmakeCocosForVSTwentyNineteen();
		}
		else if(*gotCmake.begin() == 'N' || *gotCmake.begin() == 'n') {
			std::string wantToInstall;
			std::cout << "Want To Download Cmake ?(Y or N) : ";
			std::cin >> wantToInstall;
			if (*wantToInstall.begin() == 'Y' || *wantToInstall.begin() == 'y') {
				CocosFunction::downloadandInstallCmake();
				CocosFunction::putCocos();
				CocosFunction::cmakeCocosForVSTwentyNineteen();
			}
			else {
				CocosFunction::putCocos();
			}
		}
		main();
	}
	else if (*options.begin() == 'B' || *options.begin() == 'b') {
		CocosFunction::downloadPythonForCocos();
		CocosFunction::downloadCocosVersionFour();
		CocosFunction::unzipCocos();
		std::cout << "Enter Y if extraction is done : ";
		std::cin >> chck;
		if (*chck.begin() == 'Y' || *chck.begin() == 'y') {
			CocosFunction::setupCocos();
		}
		else{
			std::cout << "Invalid Input !" << std::endl;
			std::cout << "Press Any Key To Continue...";
			std::cin.get();
			return -1;
		}
		Sleep(3000);
		system("cls");
		main();
	}
	else if (*options.begin() == 'E' || *options.begin() == 'e') {
		return 0;
	}
	else 
	{
		std::cout << "Invalid Input!" << std::endl;
		Sleep(2000);
		system("cls");
		main();
	}
	return 0;
}

