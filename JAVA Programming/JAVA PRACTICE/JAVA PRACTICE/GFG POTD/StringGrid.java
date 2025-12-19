import java.util.*;

class StringGrid {

    public int[][] searchWord(char[][] grid, String word) {
        int n = grid.length;
        int m = grid[0].length;
        int size = word.length();

        List<int[]> result = new ArrayList<>();

        // Define the eight possible directions (dx, dy)
        int[] dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
        int[] dy = { -1, 0, 1, -1, 1, -1, 0, 1 };

        // Iterate through the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                // If the current cell matches the first character of the word, try all
                // directions
                if (grid[i][j] == word.charAt(0)) {

                    // Check each direction
                    for (int dir = 0; dir < 8; dir++) {
                        int x = i;
                        int y = j;
                        int ans = 0;

                        // Check if the word can be formed in this direction
                        while (ans < size && x >= 0 && x < n && y >= 0 && y < m
                                && grid[x][y] == word.charAt(ans)) {
                            x += dx[dir];
                            y += dy[dir];
                            ans++;
                        }

                        // If the entire word is found, add the starting position
                        if (ans == size) {
                            result.add(new int[] { i, j });
                            break; // Exit the direction loop
                        }
                    }
                }
            }
        }

        // Convert the list of results to a 2D array
        int[][] newResult = new int[result.size()][2];
        for (int i = 0; i < result.size(); i++) {
            newResult[i] = result.get(i);
        }

        return newResult;
    }

}

// int[] dx = { -1, 0, 1, -1, 1, -1, 0, 1 };
// int[] dy = { -1, -1, -1, 0, 0, 1, 1, 1 };

// public int[][] searchWord(char[][] grid, String word) {

// ArrayList<int[]> ans = new ArrayList<>();
// int m = grid.length;
// int n = grid[0].length;
// for (int i = 0; i < m; i++) {
// for (int j = 0; j < n; j++) {
// if (grid[i][j] == word.charAt(0)) {
// if (search(grid, word.toCharArray(), 1, i, j, 0, 0))
// ans.add(new int[] { i, j });
// }
// }
// }
// int[][] out = new int[ans.size()][2];
// for (int i = 0; i < ans.size(); i++) {
// out[i][0] = ans.get(i)[0];
// out[i][1] = ans.get(i)[1];
// }
// return out;
// }

// public boolean search(char[][] grid, char[] word, int k, int i, int j, int
// direction, int m) {
// if (i < 0 || j < 0 || i >= grid.length || j >= grid[0].length)
// return false;
// if (k == word.length && grid[i][j] == word[k - 1])
// return true;

// if (word[k - 1] != grid[i][j])
// return false;
// boolean found = false;
// for (int pos = 0; pos < 8; pos++) {
// if (direction == -1) {
// found = found || search(grid, word, k + 1, i + dy[m], j + dx[m], -1, m);
// } else {
// found = found || search(grid, word, k + 1, i + dy[pos], j + dx[pos], -1,
// pos);
// }
// }
// return found;
// }