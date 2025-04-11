# Projects to Boost Your C Skills

## 1. Text File Word Counter

**Description**: Build a program that reads a text file and counts words, lines, and characters.

**Skills Covered**:
- File I/O operations (`fopen`, `fread`)
- String handling
- Loop structures

**Implementation Steps**:
- Open file using `fopen("input.txt", "r")`
- Read character by character using `fgetc`
- Track spaces and newlines
- Display results using `printf("Words: %d\n", wordCount)`

**Challenge**: Implement alphabetical word sorting

**Learning Outcome**: Master basic file operations and memory allocation

## 2. Student Grade Manager

**Description**: Create a system to manage student records including names, IDs, and grades.

**Skills Covered**:
- Structures
- File I/O (`fwrite`, `fread`)
- Array manipulation

**Implementation Steps**:
```c
struct Student {
    char name[50];
    int id;
    float grade;
};
```
- Write records using binary operations
- Read and process student data
- Calculate grade averages

**Challenge**: Implement ID-based search functionality

**Learning Outcome**: Strengthen understanding of structures and file operations

## 3. Simple Encryption Tool

**Description**: Develop a text file encryption tool using Caesar cipher.

**Skills Covered**:
- File I/O operations
- String manipulation
- Logical operations

**Implementation Steps**:
- Read input file using `fgets`
- Apply character shift: `char c = (c - 'A' + 3) % 26 + 'A'`
- Write encrypted content to output file

**Challenge**: Add decryption functionality

**Learning Outcome**: Enhance logical thinking and file handling skills

## 4. File Line Editor
- **What:** A tool to tweak lines in `input.txt`—pick a line by number, edit it, and save it back. Think of it as my *Dead Poets Society* script fixer—small changes, big control.  
- **Skills:** File I/O with `fgets` to read lines and `fputs` to write ‘em, arrays to store text, and `scanf` for user picks.  
- **How It Works:** Opens `input.txt`, slurps lines into a `char lines[100][256]` array, prints ‘em with numbers (e.g., “1: Hello”). User types “Edit line 3,” then new text—say, “Yo, bro”—and it overwrites line 3. Dumps the updated array back to the file. No mess, just edits.  
- **Stretch Goal:** Add a “delete line” option—shift lines up, shrink the file like a pro.  

## 5. Binary Score Keeper
- **What:** A leaderboard that saves player names and scores to `scores.bin` in binary, then pulls and shows the top 5. My *Transformers* high-score vibe—fast, compact, raw.  
- **Skills:** Binary I/O with `fwrite` to save structs and `fread` to grab ‘em, plus a `struct Score { char name[20]; int score; }` to hold data.  
- **How It Works:** User enters “Ranjika, 100”—stores it in a struct, writes it to `scores.bin`. Reads all entries into an array, bubble-sorts by score (high to low), prints top 5: “1. Ranjika - 100”. Keeps growing as you add scores.  
- **Stretch Goal:** Append new scores without overwriting—build a real history, bro.  

## 6. File Splitter
- **What:** Chops `big.txt` into smaller files like `part1.txt`, `part2.txt`—user says how many lines per file. My *Check Yes Juliet* beat splitter—slice it up clean.  
- **Skills:** File I/O with `fopen` for multiple files and `fgets` to read lines, loops to count, `scanf` for user input.  
- **How It Works:** Reads `big.txt` line-by-line—user picks “10 lines per file.” Every 10 lines, opens a new `partX.txt` (X increments), writes lines there. If 23 lines total, you get `part1.txt` (10), `part2.txt` (10), `part3.txt` (3). No overlap, pure cuts.  
- **Stretch Goal:** Merge ‘em back—read parts, stitch into `big.txt` again.  

## 7 . Interactive Quiz Maker
- **What:** A dual-mode app—create quiz questions and answers in `questions.txt`, then take the quiz and get a score. My *Secret Life of Walter Mitty* brain test—build it, play it.  
- **Skills:** File I/O with `fprintf` to write Qs and As, `fgets` for input, structs like `struct Quiz { char question[100]; char answer[50]; }`.  
- **How It Works:** Mode 1: “Add Q: What’s 2+2? A: 4”—saves to file as “Q: What’s 2+2? A: 4”. Mode 2: Reads file, asks each Q, takes your answer (`fgets`), checks with `strcmp`—right? +1 score. Ends with “Score: 8/10”. Simple, interactive, dope.  
- **Stretch Goal:** Randomize Q order with `rand()`—keep it fresh, bro.  

## 8. File Stats Analyzer
- **What:** Reads numbers from `data.txt` (one per line), finds min, max, average, and writes ‘em to `stats.txt`. My *Freya Holmér* math cruncher—numbers don’t lie.  
- **Skills:** File I/O with `fscanf` to grab numbers, arrays to store ‘em, basic math for stats (`sum / count`).  
- **How It Works:** Opens `data.txt`—say, “5\n90\n42”—reads into an array. Loops to find min (5), max (90), avg (45.67). Writes to `stats.txt`: “Min: 5, Max: 90, Avg: 45.67”. Clean, precise, useful.  
- **Stretch Goal:** Calc median—sort the array, pick the middle. Extra *Cavill* flex.  

## 9. Simple Logger
- **What:** Logs user messages with timestamps to `log.txt`, shows the last 10 entries. My *Ghibli* journal—track my grind, bro.  
- **Skills:** File I/O with `fprintf` to write, `time.h` for timestamps (`time_t`, `ctime`), `fgets` for input.  
- **How It Works:** User types “Fixed bug”—grabs time with `time(&t)`, writes “[Mon Apr 7 12:34:56 2025] Fixed bug” to `log.txt`. Read mode: scans file, stores last 10 lines in array, prints ‘em—newest first. Keeps my story alive.  
- **Stretch Goal:** Filter by date—e.g., “Show logs from April 5”—dig through like a pro.  

---