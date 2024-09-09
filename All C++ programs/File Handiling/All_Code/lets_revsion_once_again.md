We are now familar with file handiling but you know what u may know nothing and it's okay because we never know 100% in this topic and since programming is a technical subject u need constant practice.

Let's talk about some topics i am pretty sure u will be stuck in about.

What is ifstream, ofstream, input stream opening mode and output stream opening file and how is it different from cout and cin and how is it related to files, how can we use class to write and read, what is getline and where to use, i am really confused about get,put.....

Okay guys relax take a deep breath it's okay to get confused i did in your time as well but let's clear this topic once and for all.

the ifstream and ofstream reffering to the stream files and other are shown in the block diagram you can check it out in block_diagram ----------> file_input_output_streams.png

Go checkout once and lets talk about the methods lying in the stream files ifstream and ofstream


    <-----ifstream-----> 

    Provides input operation. Contains open() with default input mode. Inherits the functions get(), getline(), read(), seekg(), and tellg() functions from istream.


    <-----ofstream----->

    Provides output operation. Contains open() with default input mode. Inherits the functions put(), write(), seekp(), and tellp() functions from ostream.

