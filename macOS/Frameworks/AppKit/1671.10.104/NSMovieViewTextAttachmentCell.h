//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewTextAttachmentCell.h>

@class QTMovie;

@interface NSMovieViewTextAttachmentCell : NSViewTextAttachmentCell
{
    QTMovie *_movie;
    struct CGSize _size;
}

- (void)dealloc;
- (struct CGSize)cellSize;
- (void)addView:(id)arg1 frame:(struct CGRect)arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)initWithMovie:(id)arg1;

@end

