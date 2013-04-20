//
//  Anformel
//  AFResponder.h
//
//  Author:
//       ned rihine <ned.rihine@gmail.com>
//
//  Copyright (c) 2013 rihine All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//  
#ifndef Anformel_GUIKit_AFResponder_h
#define Anformel_GUIKit_AFResponder_h

#import <AnotherStepBase/ASVersionMacros.h>

#import <Hezelnut/HNObject.h>

#import <Anformel/AFInterfaceStyle.h>
#import <Anformel/GUIKitDefines.h>


@class HNCoder;
@class HNError;
@class HNString;

@class AFEvent;
@class AFMenu;
@class AFUndoManager;
@class AFWindow;


/*!
 * \interface AFResponder
 * \since
 * イベントを受け取り、メソッドを実行する側を表します。
 */
@interface AFResponder : HNObject <HNCoding>
{
    int interface_style_;

 @protected
    AFResponder* next_responder_;

 @private
    AFMenu* menu_;
}


/*!
 *
 */
- (AFResponder *) nextResponder;


/*!
 *
 */
- (id) setNextResponder: (AFResponder *)a_responder;


/*!
 * 
 */
- (BOOL) acceptsFirstResponder;


/*!
 *
 */
- (BOOL) becomeFirstResponder;


/*!
 *
 */
- (BOOL) resignFirstResponder;


/*!
 *
 */
- (BOOL) performKeyEquivalent: (HNEvent *)the_event;


/*!
 *
 */
- (BOOL) tryToPerform: (SEL)an_action with: (id)an_object;


/*!
 *
 */
- (id) flagsChanged: (HNEvent *)the_event;


/*!
 *
 */
- (id) helpRequested: (HNEvent *)the_event;


/*!
 *
 */



@end


#endif  /* Anformel_GUIKit_AFResponder_h */


// Local Variables:
//   mode: objc
//   coding: utf-8
// End:
