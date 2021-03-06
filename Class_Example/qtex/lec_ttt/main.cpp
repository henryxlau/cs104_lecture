/****************************************************************************
** $Id:  main.cpp   3.0.5   edited Oct 12 2001 $
**
** Copyright (C) 1992-2000 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include <qapplication.h>
#include <stdlib.h>
#include "ttt.h"


int main( int argc, char **argv )
{
    QApplication a( argc, argv );
    int n = 3;
    if ( argc == 2 )                            // get board size n
        n = atoi(argv[1]);
    if ( n < 3 || n > 10 ) {                    // out of range
        qWarning( "%s: Board size must be from 3x3 to 10x10", argv[0] );
        return 1;
    }
    TTT ttt( n );                               // create game
    ttt.setWindowTitle("Tic-Tac-Toe");
    ttt.show();                                 // show widget
    return a.exec();                            // go
}

