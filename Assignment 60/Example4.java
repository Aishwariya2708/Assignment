// 4. Write java program to count the number of characteres in a file .

import java.util.*;

class  Example5
{
  public static void main(String[] args) throws Exception
  {
    Scanner sobj = new Scanner(System.in);

  try 
  {
    System.out.print("Enter the file name: ");

    String path = sobj.nextLine();


    FileInputStream fileStream = new FileInputStream(path);

    InputStreamReader input = new InputStreamReader(fileStream);

    BufferedReader reader = new BufferedReader(input);

    String line;

    int countWord = 0 ;
    int sentenceCount = 0;
    int characterCount = 0;
    int paragraphCount= 1;
    int whitespaceCount = 0;

    while ((line = reader.readLine()) != null) 
    {
      if (line.trim().isEmpty()) 
      {
        paragraphCount++;
        continue;
      }

      characterCount += line.length();

      String[] words = line.split("\\s+");
      countWord += words.length;
      
      whitespaceCount += words.length - 1;

     String[] sentences = line.split("[.!?]+");
     sentenceCount += sentences.length;
    }
           
    if (characterCount > 0 && paragraphCount == 0)
    {
      paragraphCount = 1;
    }

    System.out.println("Total word count = "+countWord);
    System.out.println("Total number of sentences = "+sentenceCount);
    System.out.println("Total  number of characters = " + characterCount);
    System.out.println("Total  number of paragraphs = " + paragraphCount);
    System.out.println("Total  number of whitespaces = " + whitespaceCount);

    reader.close();
  } 
  catch (FileNotFoundException e) 
  {
    System.out.println("File not found. Please check the path.");
        
  } 
  catch (IOException e) 
  {
    System.out.println("An error occurred while reading the file.");
  }
   finally
  {
    sobj.close();
  }
}
}