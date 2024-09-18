using System;
using System.Collections.Generic;
public class Cell
{
  public int X;
  public int Y;
}

public class Program
{
  public void Main()
  {
    Cell cell = new Cell() { X = 2, Y = 4 };
    const Cell MINECELL = new Cell() { X = 0, Y = 2 };

  }
}

