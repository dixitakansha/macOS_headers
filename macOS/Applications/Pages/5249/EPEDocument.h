//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EPEDocument : NSObject
{
}

+ (void)map:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)checkWarnings:(id)arg1 state:(id)arg2;
+ (void)pProcessConnectionLines:(id)arg1;
+ (void)pExtractDrawablesInStorage:(id)arg1 state:(id)arg2;
+ (BOOL)isDrawableVisibleOnPage:(id)arg1 state:(id)arg2;
+ (void)pPeekAtPage:(id)arg1 withMapping:(struct EPEFloatableMapping *)arg2;

@end

