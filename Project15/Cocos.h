#pragma once
#include <string>
#include <windows.h>
#include <direct.h>
#include <iostream>

namespace CocosFunction {
	std::string CocosSetupDirectory, CocosGameName,theSLN, takeThecmake;
	char CocosGameNameCommand[100];
	char commander[100];
	void DownloadAndroidStudio() {
		system("curl -o AndStud.exe https://r2---sn-5jucgv5qc5oq-cagk.gvt1.com/edgedl/android/studio/install/2021.1.1.22/android-studio-2021.1.1.22-windows.exe");
		system("AndStud.exe");
	}
	void DownloadJava() {
		system("curl -o java.exe https://download.oracle.com/java/17/latest/jdk-17_windows-x64_bin.exe");
		system("java.exe");
	}
	void cmakeCocosForVSTwentyNineteen() {
		_chdir(commander);
		_chdir(CocosGameNameCommand);
		_chdir("proj.win32");
	 
		char thisisthecmake[100] = "cmake .. -G \"Visual Studio 16 2019\" -AWin32";
		system(thisisthecmake);
		theSLN = CocosGameName + ".sln";
		char THESLNEXECUTE[100];
		strcpy_s(THESLNEXECUTE, theSLN.c_str());
		system(THESLNEXECUTE);
		system("cls");
		std::cout << "\n\n\nFirst Start Local Windows Debugger,\n\nAfter Compilation There Will Be An Error,\n\nThen Open CMakePredefinedTargets In Solution Explorer,\n\nThen Delete ALL_BUILD and run Local Windows Debugger Again,\n\n Enjoy Cocos2D-X !\n\n" << std::endl;
	}
	void downloadPythonForCocos() {
		system("curl -o python.msi https://www.python.org/ftp/python/2.7.16/python-2.7.16.amd64.msi");
		system("python.msi");
	}
	void downloadCocosVersionFour() {
		system("curl -o cocos2d.zip https://digitalocean.cocos2d-x.org/Cocos2D-X/cocos2d-x-4.0.zip");
	}
	void unzipCocos() {
		std::cout << "Extract The cocos2d.zip in the directory : " << system("cd") << ", the folder extracted should be \"cocos2d-x-4.0\"" << std::endl;
	}
	void downloadandInstallCmake() {
		system("curl -o cmake.msi https://phoenixnap.dl.sourceforge.net/project/cmake.mirror/v3.23.0-rc2/cmake-3.23.0-rc2-windows-i386.msi");
		system("curl.msi");
	}
	void setupCocos() {
		_chdir("cocos2d-x-4.0");
		system("python ./setup.py");
	}
	void putCocos() {
		std::string  dummy, CocosLanguage, CocosCompanyName, space = " ", cocos = "cocos new", l = "-l", p = "-p", CocosDirLocation, cd = "cd";
		std::getline(std::cin, dummy);
		std::cout << "Enter Directory To Setup Cocos : ";
		std::getline(std::cin, CocosSetupDirectory);
		
		strcpy_s(commander, CocosSetupDirectory.c_str());
		_chdir(commander);
		

		std::cout << "Enter Cocos Game Name(No Whitespaces) : ";
		std::getline(std::cin, CocosGameName);
		std::cout << "Enter Language You Want(For Cpp - cpp, For Lua - lua) : ";
		std::getline(std::cin, CocosLanguage);
		std::cout << "Enter Company Name (eg. cocos.yourcompanyname.gamename) : ";
		std::getline(std::cin, CocosCompanyName);
		std::string commandInstring = cocos + space + CocosGameName + space + l + space + CocosLanguage + space + p + space + CocosCompanyName;
		char command[100];
		strcpy_s(command, commandInstring.c_str());
		strcpy_s(CocosGameNameCommand, CocosGameName.c_str());
		system(command);
		
	}
	void downloadVisualStudios() {
		system("cls");
		std::cout << "This  is going to download Visual Studio\'s 2019 \"Installes\" And Launch It\n\nYou need to follow the instructions on the installer\n\n and download Visual Studio's 2019 With C++ Desktop Package\n" << std::endl;
		system("curl -o vsinst.exe https://aka.ms/vs/16/release/vs_professional.exe");
		system("vsinst.exe");
	}
	std::wstring ReturnDirectoryForInstallFile() {
		TCHAR buffer[MAX_PATH] = { 0 };
		GetModuleFileName(NULL, buffer, MAX_PATH);
		std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
		return std::wstring(buffer).substr(0, pos);
	}
};