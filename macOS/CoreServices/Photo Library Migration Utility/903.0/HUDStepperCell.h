//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSStepperCell.h>

@interface HUDStepperCell : NSStepperCell
{
    id _mouseUpTarget;
    SEL _mouseUpSelector;
}

- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)setMouseUpSelector:(SEL)arg1;
- (SEL)mouseUpSelector;
- (void)setMouseUpTarget:(id)arg1;
- (id)mouseUpTarget;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

