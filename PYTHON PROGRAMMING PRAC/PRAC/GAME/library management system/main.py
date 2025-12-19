class Library:
    
    
    def __init__(self):
        self.no_of_books = 0
        self.books=[]  
          
    def addBook(self,books):
        self.books.append(books)
        self.no_of_books = len(self.books)
    
    def check(self):
        if self.no_of_books == len(self.books):
           print('Books Are Same, this are: ')
           for book in self.books:
                print(book) 
        else:
           return print(f'Books Are Different bcoz no of books are {self.no_of_books} and length of books is {self.books}')
    def showBookDetails(self):
        print(f"The library has {self.no_of_books}")
        for book in self.books:
          print(book)      
        
        
l1 = Library()
l1.addBook('Physics')
l1.addBook('Physics 2')
l1.addBook('Physics 3')
l1.check()

        