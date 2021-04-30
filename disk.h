const static size_t BLOCK_SIZE = 1024;

FILE* emu_disk_open(char *path, size_t nblocks);
//Creates a file that serves a virtual disk with a size of nblocks

size_t emu_disk_size(FILE* diskfile);
//Sets the size of the given file

void emu_disk_read(FILE* diskfile, int blocknum, char *data);
//Reads a specific block on the virtual disk

void emu_disk_write(FILE* diskfile, int blocknum, char *data);
//Writes a specific block on the virtual disk

void emu_disk_close(FILE* diskfile);
//Closes the file that serves a virtual disk with a size of nblocks and a defined total size
