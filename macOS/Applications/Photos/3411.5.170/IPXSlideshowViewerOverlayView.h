//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface IPXSlideshowViewerOverlayView : NSView
{
    struct CGPoint _vertices[4];
    double _xMin;
    double _yMin;
}

- (void)updateLayer;
- (void)setVertices:(struct CGPoint (*)[4])arg1;
- (BOOL)wantsLayer;

@end

