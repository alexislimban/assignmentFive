const static size_t BLOCK_SIZE = 1024;

FILE* emu_disk_open(char *path, size_t nblocks);

size_t emu_disk_size(FILE* diskfile);

void emu_disk_read(FILE* diskfile, int blocknum, char *data);

void emu_disk_write(FILE* diskfile, int blocknum, char *data);

void emu_disk_close(FILE* diskfile);
