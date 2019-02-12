/*
 Quick reference on some C# operation 
*/

// #1 open file: 
public string locateFirstError(string errFile)
{
    using (var reader = new StreamReader(errFile))
    {
        while (!reader.EndOfStream)
        {
            var line = reader.ReadLine();
        }
     }
}

// #2 list files in a directory based on latest timestamp of creation
            if(Directory.Exists(aaaaDir))
            {
                DirectoryInfo bDirInfo = new DirectoryInfo(aaaaDir);

                DirectoryInfo[] directories = b.GetDirectories().OrderByDescending(p => p.CreationTime).ToArray();

                if(directories.Length > 0)
                {
            
// #3 
