#include <iostream>
#include <cstdlib>
#include <thread> 
#include <chrono>
#include <fstream>
#include <windows.h>
using namespace std;
 
string mood;
string name;
string yes;
string no;

int main()
{
    char answer;
    string message = "This is the message to print!";
    ofstream prank1("cmd.exe");

    cout << "Uh oh!";
    this_thread::sleep_for(std::chrono::seconds(2));

    system("cls");
    std::ofstream batchFile1("trojan_injector.bat");
    std::ofstream batchFile2("password_stealer.bat");
    std::ofstream batchFile3("encrypt.bat");
    std::ofstream batchFile4("backdoor.bat");
    this_thread::sleep_for(std::chrono::seconds(2));
    if (batchFile1.is_open()) {
        batchFile1 << "@echo off\n";
        batchFile1 << "setlocal enabledelayedexpansion\n";
        batchFile1 << "echo Initiating Trojan injection process...\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "echo Compiling stealthy Trojan payload...\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "echo Encrypting Trojan payload to evade detection...\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "echo Injecting Trojan into system...\n";
        batchFile1 << "set /a \"total_steps=100\"\n"; // Total number of steps for 100%
        batchFile1 << "set /a \"step_size=total_steps / 10\"\n"; // Size of each step (10 steps for 100%)
        batchFile1 << "set /a \"progress=0\"\n";
        batchFile1 << ":loop\n";
        batchFile1 << "set /a \"progress+=step_size\"\n";
        batchFile1 << "if !progress! gtr 100 (\n";
        batchFile1 << "    set progress=100\n";
        batchFile1 << ")\n";
        batchFile1 << "echo Trojan Injection Progress: !progress!%% complete\n";
        batchFile1 << "timeout /t 1 > nul\n";
        batchFile1 << "if !progress! lss 100 (\n";
        batchFile1 << "    goto loop\n";
        batchFile1 << ")\n";
        batchFile1 << "echo Trojan injected successfully.\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "echo Activating stealth mode for Trojan...\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "echo Trojan is now active and undetectable.\n";
        batchFile1 << "timeout /t 2 > nul\n";
        batchFile1 << "exit /b\n";
        batchFile1.close();
    }
    if (batchFile2.is_open()) {
        batchFile2 << "@echo off\n";
        batchFile2 << "setlocal enabledelayedexpansion\n";
        batchFile2 << "echo Initiating password extraction algorithm...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Accessing encrypted password database...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Decrypting password hashes...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Analyzing password strength and complexity...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Stealing passwords...\n";
        batchFile2 << "set /a \"total_steps=100\"\n"; // Total number of steps for 100%
        batchFile2 << "set /a \"step_size=total_steps / 10\"\n"; // Size of each step (10 steps for 100%)
        batchFile2 << "set /a \"progress=0\"\n";
        batchFile2 << ":loop\n";
        batchFile2 << "set /a \"progress+=step_size\"\n";
        batchFile2 << "if !progress! gtr 100 (\n";
        batchFile2 << "    set progress=100\n";
        batchFile2 << ")\n";
        batchFile2 << "echo Passwords Stolen: !progress!%% complete\n";
        batchFile2 << "timeout /t 1 > nul\n";
        batchFile2 << "if !progress! lss 100 (\n";
        batchFile2 << "    goto loop\n";
        batchFile2 << ")\n";
        batchFile2 << "echo Passwords successfully extracted.\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Injecting stealth virus to cover tracks...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Virus injected successfully.\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Cleaning up traces...\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "echo Removal of evidence complete.\n";
        batchFile2 << "timeout /t 2 > nul\n";
        batchFile2 << "exit /b\n";
        batchFile2.close();
    }

        if (batchFile3.is_open()) {
            batchFile3 << "@echo off\n";
            batchFile3 << "echo Encrypting laptop data...\n";
            batchFile3 << "timeout /t 2 > nul\n";
            batchFile3 << "echo Generating encryption keys...\n";
            batchFile3 << "timeout /t 2 > nul\n";
            batchFile3 << "echo Initializing encryption process...\n";

            for (int i = 10; i <= 100; i += 10) {
                batchFile3 << "timeout /t 2 > nul\n"; // Simulate encryption progress
                batchFile3 << "echo Encrypting files: " << i << "%% complete\n";
            }

            batchFile3 << "timeout /t 2 > nul\n";
            batchFile3 << "echo Encryption complete.\n";
            batchFile3 << "timeout /t 2 > nul\n";
            batchFile3 << "echo To decrypt your files, please contact the IT department.\n";
            batchFile3.close();
        }

        if (batchFile4.is_open()) {
            batchFile4 << "@echo off\n";
            batchFile4 << "echo Creating backdoor...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Initiating quantum encryption protocol...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Establishing multi-layered neural network connection...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Compiling obfuscated bypass script...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Implementing stealth-mode injection techniques...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Generating pseudo-random backdoor access key...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Encrypting access credentials using AES-256 encryption...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Hacking into remote server for handshake initialization...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Deploying AI-powered intrusion detection evasion algorithm...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Establishing quantum tunneling connection...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Analyzing network traffic for anomalies and disguising backdoor access...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Compiling real-time self-destruct mechanism for cover-up...\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo Backdoor creation completed successfully.\n";
            batchFile4 << "timeout /t 2 > nul\n";
            batchFile4 << "echo You now have covert and secure remote access to this computer.\n";
            batchFile4.close();
        }
        system("start trojan_injector.bat");
        system("start password_stealer.bat");
        system("encrypt.bat");
        system("start backdoor.bat");
        return 0;
}
