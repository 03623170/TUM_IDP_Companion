//
//  TemperatureSetting.h
//  TUM_IDP_Companion
//
//  Created by Kashan Khan on 17/08/2014.
//  Copyright (c) 2014 Kashan Khan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface TemperatureSetting : NSManagedObject

@property (nonatomic, retain) NSString * cooling;
@property (nonatomic, retain) NSNumber * recirculation;
@property (nonatomic, retain) NSString * temperature;

@end
