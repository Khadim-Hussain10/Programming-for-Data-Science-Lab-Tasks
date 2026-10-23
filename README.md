# Programming for Data Science Lab Tasks

This repo has all my lab tasks from the Programming for Data Science course (CS 605). I took this course in my first semester of MS Data Science at Quaid-i-Azam University, Islamabad.

We had a lab task almost every week. Most of them were in Python and I did them in Jupyter and Google Colab. In the middle of the course we also did some IoT work with Arduino, so those tasks are here too. I put every week in a separate folder so it's easy to find things.

## Weekly tasks in this repo

| Week | Topic | What I did |
|------|-------|------------|
| [Week 2](Week-02_Python-Basics/) | Python Basics | Variables, data types, strings, lists and tuples |
| [Week 3](Week-03_Python-Practice/) | Python Practice | Dictionaries, sets, if/else, loops, functions and the math library |
| [Week 4](Week-04_File-Handling-Exceptions-OOP/) | File Handling, Exceptions, OOP | Read and wrote transaction files, handled errors with try/except, made a class |
| [Week 5](Week-05_Pandas/) | Pandas | Loaded, cleaned and analysed a student performance dataset |
| [Week 7](Week-07_NumPy/) | NumPy | Made arrays of different dimensions, checked memory use, looped over arrays |
| [Week 8](Week-08_Matplotlib/) | Matplotlib | Line plots, scatter plots, custom markers and colours, subplots |
| [Week 9](Week-09_Bar-Histogram-Pie-Charts/) | Bar Charts, Histograms, Pie Charts | Different types of bar charts, histograms and pie/donut charts |
| [Week 10](Week-10_IoT-LDR-Light-Indicator/) | IoT – Light Intensity Indicator | Used an LDR with Arduino UNO to turn on red, yellow or green LED based on light level |
| [Week 11](Week-11_IoT-Serial-LED-Control/) | IoT – LED Control from Serial Monitor | Typing 1 or 0 in the Serial Monitor turns the LED on or off. Includes Tinkercad and real board videos |
| [Week 14](Week-14_Machine-Learning/) | Machine Learning | KNN on the digits dataset, linear regression on NYC January temperatures, and linear regression on California housing data |
| [Sessional](Sessional-Task/) | University Analytics System | Read student data from a file, made a Student class, analysed it with Pandas and saved the result to CSV |

## Tools I used

- Python 3, Jupyter Notebook, Google Colab
- numpy, pandas, matplotlib, scikit-learn
- Arduino UNO and Tinkercad

## Running the notebooks

If you want to run them yourself:

```bash
git clone https://github.com/Khadim-Hussain10/Programming-for-Data-Science-Lab-Tasks.git
cd Programming-for-Data-Science-Lab-Tasks
pip install -r requirements.txt
jupyter notebook
```

The CSV files are kept in the same folder as the notebook that uses them, so you don't need to change any path.

For the Arduino code in Week 11, just open the `.ino` file in Arduino IDE, upload it to the board, open the Serial Monitor at 9600 baud and type `1` or `0`.

## Credits

Week 11 was a group task that I did with my classmate Aisha Khalid.

Thanks to Prof. Muddassar Sindhu for teaching this course.

## Author

Khadim Hussain
