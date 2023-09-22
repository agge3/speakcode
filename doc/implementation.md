speech to text API:
    * WhisperAI
      https://github.com/D7EAD/liboai.git
        * AssemblyAI
        * Microsoft Azure
        * Google Cloud

Outline:
    wait for user voice input
    send input to API
    recieve voice input transcribe as text
        maybe:
        create necessary file and directory stucture
    run code inside of function
    run program -> call outside script -> run exe

Limitations & Assumptions:
    branch:
        do you want to have directly what you say transcribed?
            * assumes user knows C-syntax
            directly transcribe/includes/all syntax
                * user must be in working file/dir
                    navigation may be out of scope
        do you want to have ChatGPT transcribe into code?
            * assumes user does not know C-syntax
            * expects the proficiency required for chatgpt
                "if you can tell chatgbt what to code, you can code it now!"
            take transcription place in (create) new main() and run exe
    problem:
        how to intuitively solve user's decision
    solution:
        seperate modes or user profiles?

NEW IDEA: Completely spoken IDE. Speak commands and translate them into text -> send back to system

Prototype:
   Assumptions:
      correct src directory
      simple 1 directory (to limit scope)
      empty directory

