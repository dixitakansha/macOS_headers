//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSOutlineViewDelegate-Protocol.h"

@class NSEvent, NVOutlineView;

@protocol NVOutlineViewKeyDelegate <NSOutlineViewDelegate>
- (BOOL)outlineView:(NVOutlineView *)arg1 keyUp:(NSEvent *)arg2;
- (BOOL)outlineView:(NVOutlineView *)arg1 keyDown:(NSEvent *)arg2;
@end

