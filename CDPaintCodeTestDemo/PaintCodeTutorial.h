//
//  PaintCodeTutorial.h
//  PaintCodeTutorial
//
//  Created by cd on 16/11/14.
//  Copyright (c) 2016 chendi. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface PaintCodeTutorial : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* canvas1Targets;

// Colors
+ (UIColor*)color;

// Drawing Methods
+ (void)drawCanvas1;
+ (void)drawCanvas2;

// Generated Images
+ (UIImage*)imageOfCanvas1;

@end
