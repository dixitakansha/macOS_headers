//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityMockUIElement.h>

@interface NSAccessibilityIndexedMockUIElement : NSAccessibilityMockUIElement
{
    long long _index;
}

+ (id)elementWithRole:(id)arg1 subrole:(id)arg2 index:(long long)arg3 parent:(id)arg4;
+ (id)elementWithRole:(id)arg1 index:(long long)arg2 parent:(id)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)index;
- (id)initWithRole:(id)arg1 subrole:(id)arg2 index:(long long)arg3 parent:(id)arg4;
- (id)initWithRole:(id)arg1 index:(long long)arg2 parent:(id)arg3;

@end

