//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate-Protocol.h"

@class ASICloudFilesContainer, NSMutableArray, NSString;

@interface ASICloudFilesContainerXMLParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *containerObjects;
    NSString *currentContent;
    NSString *currentElement;
    ASICloudFilesContainer *currentObject;
}

- (void)setCurrentObject:(id)arg1;
- (id)currentObject;
- (void)setCurrentContent:(id)arg1;
- (id)currentContent;
- (void)setCurrentElement:(id)arg1;
- (id)currentElement;
- (void)setContainerObjects:(id)arg1;
- (id)containerObjects;
- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end

