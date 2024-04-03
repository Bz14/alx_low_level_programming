#!/usr/bin/python3
""" A module to calculate the perimeter of island """


def island_perimeter(grid):
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        visited = set()
        row_len = len(grid)
        col_len = len(grid[0])
        """ In bound Functio """
        def is_inbound(row, col):
            return ((row >= 0 and row < row_len) and
                    (col >= 0 and col < col_len))

        """ DFS function """
        def DFS(grid, visited, row, col):
            if not is_inbound(row, col) or grid[row][col] == 0:
                return 1
            visited.add((row, col))
            perim = 0
            for x, y in directions:
                new_row = row + x
                new_col = col + y
                if (new_row, new_col) not in visited:
                    perim += DFS(grid, visited, new_row, new_col)
            return perim
        for i in range(row_len):
            for j in range(col_len):
                if grid[i][j] == 1:
                    return DFS(grid, visited, i, j)
