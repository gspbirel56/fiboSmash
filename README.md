I was just learning about malloc and C vs C++, then decided to put this little gem together.

On macOS, using g++, the C++ version ate up about 34KB of storage while the C version (gcc) took only 8.5KB.
Impressive space savings, especially considering the only real differences between the two projects involved cout and fout vs printf and fprintf.
