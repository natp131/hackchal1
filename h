import javax.swing.JButton;

public class MazeGame extends JFrame{

int sizeX = 15;
int sizeY = 15;
int cellSize = 20;
Maze m1 = new Maze(sizeX, sizeY);

public MazeGame() {
  initUI();
  }
  public static void main(String[] args) {
    SwingUtilities.invokeLater(new Runnable() {
      @Override
      public void run() {
        MazeGame mz = newMazeGame();
        mz.setVisible(true);
      {
   }); 
}

private void initUI() {
  setTitle("Maze Game");
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  //setLayout(new BorderLayout() );
  setSize(sizeX * cellSize + 200, sizeY * cellSize + 75);
  
  MazeDisplay md = new MazeDisplay(ml, cellSize);
  add(md);
  addKeyListener(md);
  setContentPane(md);
  md.setFocusable(true);
