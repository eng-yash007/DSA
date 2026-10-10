class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        from typing import List

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid or not grid[0]:
            return 0

        m, n = len(grid), len(grid[0])
        visited = set()

        def dfs(r, c):
            # Stop if out of bounds or not land
            if (r < 0 or r >= m or c < 0 or c >= n
                    or grid[r][c] == '0'
                    or (r, c) in visited):
                return

            # Mark the cell as visited
            visited.add((r, c))

            # Explore all four directions
            dfs(r + 1, c)
            dfs(r - 1, c)
            dfs(r, c + 1)
            dfs(r, c - 1)

        count = 0

        for r in range(m):
            for c in range(n):
                if grid[r][c] == '1' and (r, c) not in visited:
                    count += 1
                    dfs(r, c)

        return count