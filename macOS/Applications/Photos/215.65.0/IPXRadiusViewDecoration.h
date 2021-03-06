//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXLabelLayer, IPXShape, NSColor;

@interface IPXRadiusViewDecoration : NSObject
{
    BOOL _selected;
    IPXShape *_shape;
    IPXLabelLayer *_label;
    NSColor *_selectedColor;
    NSColor *_color;
    NSColor *_selectedLabelColor;
    NSColor *_labelColor;
}

+ (id)decorationWithTitle:(id)arg1 dotSize:(double)arg2 dotColor:(id)arg3 labelColor:(id)arg4;
@property(retain, nonatomic) NSColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSColor *selectedLabelColor; // @synthesize selectedLabelColor=_selectedLabelColor;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) IPXLabelLayer *label; // @synthesize label=_label;
@property(retain, nonatomic) IPXShape *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (void)removeFromSuperlayer;
- (void)setNeedsDisplay;

@end

