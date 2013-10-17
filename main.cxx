///:
/*****************************************************************************
 **                                                                         **
 **                               .======.                                  **
 **                               | INRI |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                      .========'      '========.                         **
 **                      |   _      xxxx      _   |                         **
 **                      |  /_;-.__ / _\  _.-;_\  |                         **
 **                      |     `-._`'`_/'`.-'     |                         **
 **                      '========.`\   /`========'                         **
 **                               | |  / |                                  **
 **                               |/-.(  |                                  **
 **                               |\_._\ |                                  **
 **                               | \ \`;|                                  **
 **                               |  > |/|                                  **
 **                               | / // |                                  **
 **                               | |//  |                                  **
 **                               | \(\  |                                  **
 **                               |  ``  |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                   \\    _  _\\| \//  |//_   _ \// _                     **
 **                  ^ `^`^ ^`` `^ ^` ``^^`  `^^` `^ `^                     **
 **                                                                         **
 **                    Copyright © 1997-2013 by Tong G.                     **
 **                          ALL RIGHTS RESERVED.                           **
 **                                                                         **
 ****************************************************************************/

#include "RubikCubeGlobal.hxx"

#include <iostream>
#include <string>

int main( int _Argc, char* *_Argv )
	{
	using _Color = _AbstractRubikCube::_Color;

	_Color _Red = _Color::_Red;
	_Color _Orange = _Color::_Orange;
	_Color _Blue = _Color::_Blue;
	_Color _Green = _Color::_Green;
	_Color _Yellow = _Color::_Yellow;
	_Color _White = _Color::_White;

	_3x3RubikCube _Cube
		{ { _Blue, _White, _Orange, _Blue, _Red, _Red, _Orange, _Green, _Red }
		, { _Blue, _Orange, _Orange, _Green, _Orange, _Yellow, _Blue, _Green, _Yellow }
		, { _Yellow, _Blue, _Red, _Orange, _Blue, _Yellow, _Green, _White, _White }
		, { _Green, _Red, _Yellow, _White, _Green, _Red, _Green, _Orange, _Yellow }
		, { _Green, _Blue, _Red, _Red, _Yellow, _Yellow, _White, _Green, _White }
		, { _Blue, _Yellow, _White, _Blue, _White, _White, _Red, _Orange, _Orange }
		};

	_Cube._Print();
	// _Cube._SolveRubikCube();
	// _Cube._Print();

	std::array< _Color, 3 > _Layer = _Cube._Test();
	for ( _Color _Elem : _Layer )
		{
		switch ( _Elem )
 			{
		case _Color::_Red:    std::printf("\033[41;37m\033[4m \033[5m|"); break;
		case _Color::_Orange: std::printf("\033[43;37m\033[4m \033[5m|"); break;
		case _Color::_Blue:   std::printf("\033[44;37m\033[4m \033[5m|"); break;
		case _Color::_Green:  std::printf("\033[42;33m\033[4m \033[5m|"); break;
		case _Color::_Yellow: std::printf("\033[45;37m\033[4m \033[5m|"); break;
		case _Color::_White:  std::printf("\033[47;30m\033[4m \033[5m|"); break;
			}
		}

	std::printf("\033[0m\n");
#
	return 0;
	};

 ////////////////////////////////////////////////////////////////////////////

 /***************************************************************************
 **                                                                        **
 **      _________                                      _______            **
 **     |___   ___|                                   / ______ \           **
 **         | |     _______   _______   _______      | /      |_|          **
 **         | |    ||     || ||     || ||     ||     | |    _ __           **
 **         | |    ||     || ||     || ||     ||     | |   |__  \          **
 **         | |    ||     || ||     || ||     ||     | \_ _ __| |  _       **
 **         |_|    ||_____|| ||     || ||_____||      \________/  |_|      **
 **                                           ||                           **
 **                                    ||_____||                           **
 **                                                                        **
 ***************************************************************************/
///:~