//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSMutableParagraphStyle, NSString;

@interface iTermBadgeLabel : NSObject
{
    BOOL _dirty;
    NSMutableParagraphStyle *_paragraphStyle;
    NSColor *_fillColor;
    NSColor *_backgroundColor;
    NSString *_stringValue;
    NSImage *_image;
    struct CGSize _viewSize;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
- (double)idealPointSize;
- (struct CGSize)maxSize;
- (struct CGSize)sizeWithAttributes:(id)arg1 truncated:(char *)arg2;
- (id)attributesWithPointSize:(double)arg1;
- (id)imageWithPointSize:(double)arg1;
- (id)freshlyComputedImage;
- (void)dealloc;
- (id)init;

@end

