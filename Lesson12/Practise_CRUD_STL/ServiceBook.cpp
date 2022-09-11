#include "Context.cpp"

//Create, Read, Update, and Delete

class ServiceBook {
	Book _books{  };
public:
	ServiceBook() {}
	void _create() 
	{ 
		_books = (* new ContextBooks).initBooks(); 
	}
	void _read() 
	{  
		for (auto& book : _books.getBooks())
			cout << book.toString() << "------------------" << endl;
	}
	void _update(int id, Book &newBook)
	{
		for (auto& book : _books.getBooks())
		{
			if (book.getId() == id)
			{
				book.setBookName(newBook.getBookName());
				book.setAuthor(newBook.getAuthor());
				book.setCategory(newBook.getCategory());
				book.setPrice(newBook.getPrice());
				book.setPart(newBook.getPart());
			}
		}
	}
	void _delete(int id)
	{
		_books.getBooks()
			.erase(_books.getBooks().begin() + --id);
	}
};