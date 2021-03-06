//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WebPreferences.h>

@interface WebPreferences (MessageDefaultsSupport)
+ (id)richTextComposeWebPreferences;
+ (id)plainTextComposeWebPreferences;
+ (id)_unrenderedUserStyleSheet;
+ (id)unrenderedMailWebPreferences;
+ (id)richTextMailWebPreferences;
+ (id)plainTextMailWebPreferences;
- (void)_configureFixedFont:(id)arg1;
- (void)_configureCommonRichTextPreferences;
- (void)_configureCommonPlainTextPreferences;
- (void)_configureCommonPreferences;
- (void)_configureComposeRichPreferences:(id)arg1;
- (void)_configureComposePlainTextPreferences:(id)arg1;
- (void)_configureRichTextMessagePreferences:(id)arg1;
- (void)_configurePlainTextMessagePreferences:(id)arg1;
- (id)_userStyleSheetURLIsForCompose:(BOOL)arg1;
@end

