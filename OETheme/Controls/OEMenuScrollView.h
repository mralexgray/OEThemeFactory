//
//  OEMenuScrollView.h
//  OEThemeFactory
//
//  Created by Faustino Osuna on 4/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OEMenu.h"

@interface OEMenuScrollView : NSScrollView

- (void)OE_layoutIfNeeded;

@property(nonatomic, assign)   OEMenuStyle style;
@property(nonatomic, readonly) NSSize       intrinsicSize;
@property(nonatomic, retain)   NSArray     *itemArray;

@property(nonatomic, assign, getter = isScrollable)          BOOL scrollable;
@property(nonatomic, assign, getter = doesMenuContainImages) BOOL containImages;

@end