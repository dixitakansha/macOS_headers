//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSColor;

@interface ColoredLineBox : NSBox
{
    BOOL _vertical;
    NSColor *_color;
    double _lineWidth;
}

@property(nonatomic, getter=isVertical) BOOL vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonColoredLineBoxInit;

@end

