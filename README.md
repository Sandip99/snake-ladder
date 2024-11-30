+--------------------+
|       Game         |
+--------------------+
| - board: Board     |
| - players: Player[]|
| - currentTurn: int |
+--------------------+
| + startGame()      |
| + rollDice(): int  |
| + playTurn()       |
+--------------------+

+--------------------+
|       Board        |
+--------------------+
| - size: int        |
| - snakes: Snake[]  |
| - ladders: Ladder[]|
+--------------------+
| + movePlayer(pos)  |
| + checkSnakeOrLadder(pos): int |
+--------------------+

+--------------------+
|       Snake        |
+--------------------+
| - head: int        |
| - tail: int        |
+--------------------+

+--------------------+
|       Ladder       |
+--------------------+
| - start: int       |
| - end: int         |
+--------------------+

+--------------------+
|       Player       |
+--------------------+
| - name: string     |
| - position: int    |
+--------------------+
| + move(pos: int)   |
| + getPosition(): int |
