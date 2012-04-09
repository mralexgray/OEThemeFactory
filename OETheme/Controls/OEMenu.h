//
//  OEMenu.h
//  OEThemeFactory
//
//  Created by Faustino Osuna on 3/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OEMenuView.h"
#import "OEPopUpButton.h"

@class OEPopUpButton;

@interface OEMenu : NSWindow
{
@private
    OEMenuView *_view;
    BOOL        _cancelTracking;
    BOOL        _closing;

    __unsafe_unretained OEMenu *_supermenu;
    OEMenu                     *_submenu;
}

+ (void)popUpContextMenuForPopUpButton:(OEPopUpButton *)button withEvent:(NSEvent *)event;
+ (void)popUpContextMenu:(NSMenu *)menu forScreenRect:(NSRect)rect withArrowOnEdge:(OERectEdge)edge withStyle:(OEMenuStyle)style withEvent:(NSEvent *)event;

- (void)cancelTracking;
- (void)cancelTrackingWithoutAnimation;

@end
