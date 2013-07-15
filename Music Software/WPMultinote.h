#ifndef _WPMULTINOTE_H
#define _WPMULTINOTE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "WPLib.h"
#include "WPNote.h"

class WPMultinote
{
	public:
		WPMultinote();
		WPMultinote(const WPNote &);
		~WPMultinote();
		void insertNote(const WPNote &);
		void change(const std::vector <WPNote> &);
		void change(const WPMultinote &);
		void deleteNote(const WPNote &);
		std::vector <WPNote> getNotes();
	private:
		std::vector <WPNote> List;
};

#endif
