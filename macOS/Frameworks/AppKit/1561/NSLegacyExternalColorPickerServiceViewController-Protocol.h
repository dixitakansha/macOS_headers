//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSColor, NSColorList;

@protocol NSLegacyExternalColorPickerServiceViewController
- (void)loadAndAddColorPickerContentView;
- (void)supportsMode:(long long)arg1 reply:(void (^)(BOOL))arg2;
- (void)detachColorList:(NSColorList *)arg1;
- (void)attachColorList:(NSColorList *)arg1;
- (void)alphaControlToggled:(BOOL)arg1;
- (void)setMode:(long long)arg1;
- (void)setColor:(NSColor *)arg1;
@end

