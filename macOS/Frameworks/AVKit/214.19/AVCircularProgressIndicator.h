//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface AVCircularProgressIndicator : NSView
{
    double _minValue;
    double _maxValue;
    double _value;
    unsigned int _showsProgress:1;
}

- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
@property double value;
@property double maxValue;
@property double minValue;
- (void)dealloc;
- (id)init;

@end

