//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer, NSString;

@interface MIDIToolTipLayer : CALayer
{
    CATextLayer *label;
    id _owner;
}

@property id owner; // @synthesize owner=_owner;
@property NSString *string;
- (id)initWithString:(id)arg1;

@end

