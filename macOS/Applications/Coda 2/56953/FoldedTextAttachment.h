//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextAttachment.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FoldedTextAttachment : NSTextAttachment
{
    struct _NSRange I_foldedTextRange;
    NSMutableArray *I_innerAttachments;
}

- (void)dealloc;
- (id)description;
- (id)innerAttachments;
- (void)moveAttachmentLocation:(int)arg1;
- (void)setFoldedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)foldedTextRange;
- (id)initWithFoldedTextRange:(struct _NSRange)arg1;

@end

