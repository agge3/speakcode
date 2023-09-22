## Research Questions
# 1. What is the intention of this project?
To provide an interface that allows the interaction of a computer (to program) hands free, without mouse and keyboard, via speech.
# 2. What is the driving insight to this project?
The end-goal of high-level programming languages, as well as computer programming in general, is to provide an accessible that is as natural to human speech as possible. In other words, to be able to speak and have a computer intuitively do is the ultimate goal of computer linguistics study and computer programming on a whole. High-level languages have been designed to achieve that goal. Speaking to perform actions is a future evolution and vision of that goal.
# 3. What key principles should guide the project?
Accessibility, simplicity, & ease-of/intuitiveness-of use
# 4. What personal insights do the researchers hope to gain?
An increased fluency in C/C++, incorporation of external APIs, and understanding of systems-software, unconventional I/O & data, and an applicable project that brings value and insight to society and emerging technologies.
# 5. What value does this project contribute to society?
Contribution to society should be a driving motivator in all intent of an increasingly interwoven society. This project aims to explore the implementation of that end-game goal of computer linguistics, exploring emerging technologies (AI speech to text & speech interpretation), and contribute a valuable capstone of those ideals. To explore vision in computer science and actualize on a world of technology accessible, in all it's power, to everyone. Enabling speech to programing, without interaction with a computer, is broadening a horizon of accessibility for all that is deep-rooted in the evolution of the miraculous revolution of computing.
## Pseduocode
<code>branch: do we want to gather input data or not?
    &nbsp;n? go back into a polling state, waiting for input
        &nbsp;&nbsp;implement polling/idle state
    &nbsp;y? look for flag, flag is confirmed, move onto input handling</code>
    
<code>input handling: syscall to grab microphone data
  &nbsp;store microphone data in tmp, assign unique_ptr (to avoid copying)
  &nbsp;send microphone data to external API
  &nbsp;recieve transcription, store and be able to find
  &nbsp;unique_ptr to locate transcription/use without copying
  &nbsp;recieved in JSON? parse JSON to string</code>
  
<code>branch: what is the string? is it a command we know?
  &nbsp;n? error-handling, go back to idle state, request again, etc.
  &nbsp;y? ...
    &nbsp;&nbsp;branch: is it a shell command or not?
      &nbsp;&nbsp;&nbsp;shell? jump to shell handling
      &nbsp;&nbsp;&nbsp;else? jump to code handling</code>
      
<code>shell handling: *assumption:* we already know it's a valid shell command (checked already to be in this branch)
  &nbsp;send to sys to exec command
    &nbsp;&nbsp;branch: did sys confirm or reject command? bool is_confirmed()
      &nbsp;&nbsp;&nbsp;confirm? move on, go back to polling/idle state
      &nbsp;&nbsp;&nbsp;reject? error handling, go back to polling/idle state</code>
      
<code>code:
  &nbsp;bool file_is_open()
  &nbsp;bool file_is_writable()
    &nbsp;&nbsp;handle how to write, focus on vi
  &nbsp;bool write_is_successful()
  &nbsp;void write_code()
    &nbsp;&nbsp;handle writing/saving/etc.
go back to polling/idle state</code>
