#ifndef SANDPILES
#define SANDPILES

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void collapse(int grid[3][3]);
void top(int grid[3][3], int x, int y, int center);
int is_unstable(int grid[3][3]);

#endif /* ifndef SANDPILES */