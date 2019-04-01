package tcs;

public class GreedSnake 
{
    public static void main(String[] args) 
    {
        SnakeModel mode1=new SnakeModel(20,30);
        SnakeControl control=new SnakeControl(model);
        SnakeContol(model);
        SnakeView view=new SnakeView(model,control);
        model.addObserver(view);
        (new Thread(model)).start)();
        
    }
    
}
package tcs;

import java.awt.event.KeuEvent;
import java.awt.event.KeyListenner;
public class SnakeControl immplements KeyListenner
{
     SnakeModel model;
public SnakeControl(SnakeMoodel model)
{
     SnakeModel model;
     public SnakeControl(snakeModel model)
{
     this.model=model;
}
public void keypressed(KeyEvent e)
{
    int keyCode=e.getKeyCode();
    if (model.running)
    switch(keyCode)
{
case KeyEvent.VK_UP:
model.changeDitection(SnakeModel.UP)
break;
case
KeyEvent.VK_KKWN:
break;
}
